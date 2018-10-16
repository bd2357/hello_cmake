/*
 * modem_support.h
 *
 *  Created on: Oct 12, 2018
 *      Author: eng
 */

#ifndef SRC_MODMAN_MODEM_SUPPORT_H_
#define SRC_MODMAN_MODEM_SUPPORT_H_

#include "lmdb_wrapper.h"
#include <functional>

struct basicModemVariables
{
    char const *mdmSatelliteNetworkId;
    char const *mdmSwVersion;
    float       mdmRxBw;
    float       mdmRxFreq;
    float       mdmRxSpreadFactor;
    float       mdmRxSymRate;
    float       mdmTxBw;
    float       mdmTxFreq;
    float       mdmTxPwr;
    float       mdmTxSpreadFactor;
    float       mdmTxSymRate;
    float       mdmRxLed;
    float       mdmSmSqf;
    float       mdmTxSnr;
    int32_t     mdmTxMute;
    int32_t     mdmDID;
    int32_t     mdmFanSpeed;
    int32_t     mdmRxBitRate;
    int32_t     mdmRxFecRate;
    int32_t     mdmRxLOFreq;
    uint32_t    mdmRxModeType;
    uint32_t    mdmSmTotalBytesDownlink;
    uint32_t    mdmSmTotalBytesUplink;
    uint32_t    mdmSmTotalPacketsDownlink;
    uint32_t    mdmSmTotalPacketsUplink;
    char const *mdmSerialNumber;
    int32_t     mdmTxBitRate;
    int32_t     mdmTxBucFreq;
    int32_t     mdmTxFecRate;
    int32_t     mdmTxModeType;
    uint32_t    mdmLinkUptime;
    uint32_t    mdmUptime;
    uint32_t    mdmOpStatus;
    uint32_t    mdmSatLinkStatus;

    int32_t getMdmDid () const;
    void setMdmDid (int32_t mdmDid);
    int32_t getMdmFanSpeed () const;
    void setMdmFanSpeed (int32_t mdmFanSpeed);
    uint32_t getMdmLinkUptime () const;
    void setMdmLinkUptime (uint32_t mdmLinkUptime);
    uint32_t getMdmOpStatus () const;
    void setMdmOpStatus (uint32_t mdmOpStatus);
    int32_t getMdmRxBitRate () const;
    void setMdmRxBitRate (int32_t mdmRxBitRate);
    float getMdmRxBw () const;
    void setMdmRxBw (float mdmRxBw);
    int32_t getMdmRxFecRate () const;
    void setMdmRxFecRate (int32_t mdmRxFecRate);
    float getMdmRxFreq () const;
    void setMdmRxFreq (float mdmRxFreq);
    float getMdmRxLed () const;
    void setMdmRxLed (float mdmRxLed);
    int32_t getMdmRxLoFreq () const;
    void setMdmRxLoFreq (int32_t mdmRxLoFreq);
    uint32_t getMdmRxModeType () const;
    void setMdmRxModeType (uint32_t mdmRxModeType);
    float getMdmRxSpreadFactor () const;
    void setMdmRxSpreadFactor (float mdmRxSpreadFactor);
    float getMdmRxSymRate () const;
    void setMdmRxSymRate (float mdmRxSymRate);
    const char* getMdmSatelliteNetworkId () const;
    void setMdmSatelliteNetworkId (const char* mdmSatelliteNetworkId);
    uint32_t getMdmSatLinkStatus () const;
    void setMdmSatLinkStatus (uint32_t mdmSatLinkStatus);
    const char* getMdmSerialNumber () const;
    void setMdmSerialNumber (const char* mdmSerialNumber);
    float getMdmSmSqf () const;
    void setMdmSmSqf (float mdmSmSqf);
    uint32_t getMdmSmTotalBytesDownlink () const;
    void setMdmSmTotalBytesDownlink (uint32_t mdmSmTotalBytesDownlink);
    uint32_t getMdmSmTotalBytesUplink () const;
    void setMdmSmTotalBytesUplink (uint32_t mdmSmTotalBytesUplink);
    uint32_t getMdmSmTotalPacketsDownlink () const;
    void setMdmSmTotalPacketsDownlink (uint32_t mdmSmTotalPacketsDownlink);
    uint32_t getMdmSmTotalPacketsUplink () const;
    void setMdmSmTotalPacketsUplink (uint32_t mdmSmTotalPacketsUplink);
    const char* getMdmSwVersion () const;
    void setMdmSwVersion (const char* mdmSwVersion);
    int32_t getMdmTxBitRate () const;
    void setMdmTxBitRate (int32_t mdmTxBitRate);
    int32_t getMdmTxBucFreq () const;
    void setMdmTxBucFreq (int32_t mdmTxBucFreq);
    float getMdmTxBw () const;
    void setMdmTxBw (float mdmTxBw);
    int32_t getMdmTxFecRate () const;
    void setMdmTxFecRate (int32_t mdmTxFecRate);
    float getMdmTxFreq () const;
    void setMdmTxFreq (float mdmTxFreq);
    int32_t getMdmTxModeType () const;
    void setMdmTxModeType (int32_t mdmTxModeType);
    int32_t getMdmTxMute () const;
    void setMdmTxMute (int32_t mdmTxMute);
    float getMdmTxPwr () const;
    void setMdmTxPwr (float mdmTxPwr);
    float getMdmTxSnr () const;
    void setMdmTxSnr (float mdmTxSnr);
    float getMdmTxSpreadFactor () const;
    void setMdmTxSpreadFactor (float mdmTxSpreadFactor);
    float getMdmTxSymRate () const;
    void setMdmTxSymRate (float mdmTxSymRate);
    uint32_t getMdmUptime () const;
    void setMdmUptime (uint32_t mdmUptime);
};


// a general counting event class
class MmEvent
{
private:
    uint32_t eventFlag;
public:
    MmEvent (bool initial_state = false) :
            eventFlag (initial_state ? 1 : 0)
    {
    }
    virtual ~MmEvent ()
    {
    }

    uint32_t operator= (uint32_t value)
    {
        eventFlag = value;
        return value;
    }

    operator const uint32_t& () const {return eventFlag;}

    bool isSet () const
    {
        return eventFlag != 0;
    }

    uint32_t test() const {return eventFlag;}

    uint32_t testAndClear ()
    {
        uint32_t temp = eventFlag;
        eventFlag = 0;
        return temp;
    }
    void clear ()
    {
        eventFlag = 0;
    }
    void set ()
    { // saturated increment
        uint32_t temp = eventFlag;
        ++temp;
        if (!temp)
            temp = std::numeric_limits<uint32_t>::max ();
        eventFlag = temp;
    }

    // special purpose saturated decrement (poor mans semaphore)
    uint32_t unset ()
    { // saturated decrement
        if(eventFlag) --eventFlag;
        return eventFlag;
    }


};

/**
 * general timer class tied to event.
 */
class MmTimer : public MmEvent
{

    uint64_t period_ms; // 0 disables timer
    uint64_t stopped;   // copy of period_ms
    uint64_t lastTime_ms; // from TKSystem::GetTickCountMs()

public:
    MmTimer (uint64_t period_ms, uint64_t now_ms = 0) :
            MmEvent(now_ms == 0),
            period_ms (period_ms),
            stopped (0),
            lastTime_ms (now_ms)
    {
    }
    virtual ~MmTimer ()
    {
    }

    operator uint64_t() const
    {
        return lastTime_ms;
    }

    void setTimer(uint64_t new_period_ms)
    {
        if(period_ms)
        {
            period_ms = new_period_ms;
        }
        else
        {
            stopped = new_period_ms;
        }
    }

    void updateTimer ()
    {
        if (period_ms)
        {
            lastTime_ms += period_ms;
        }

    }
    void updateTimer (uint64_t now_ms)
    {
        if (period_ms)
        {
            lastTime_ms = now_ms;
        }
    }

    // actually run the timer, mark the trigger if
    // time is reached
    bool runTimer (uint64_t now_ms)
    {
        if (period_ms)
        {
            bool trig = (now_ms - lastTime_ms) > period_ms;
            if (trig)
                set ();  // set sticky alarm
            return trig;
        }
        else
        {
            return false;
        }
    }

    void cycleTimer(uint64_t now_ms, bool useFixed = true)
    {
        if (runTimer(now_ms))
        {
            if (useFixed) updateTimer();
            else updateTimer(now_ms);
        }
    }

    // stop the timer from trigger on next runTimer
    void stopTimer ()
    {
        if (period_ms)
        {
            stopped = period_ms;
            period_ms = 0;
        }
    }
    // only re-enables if disabled, leaves trigger in past
    // which could cause trigger on next run
    void restartTimer ()
    {
        if (stopped)
        {
            period_ms = stopped;
        }
    }

    // re-enables if disabled, sets start point to now
    void restartTimer (uint64_t now_ms)
    {
        if (stopped)
        {
            period_ms = stopped;
        }
        lastTime_ms = now_ms;
    }
};

// an event runner is a abstract base class that allows construction
// of a list of event related actions
// derived class implement an action method to execute when an associated
// event object is tested to be set
class MmEventRunnerBase
{
public:
    MmEventRunnerBase (MmEvent &myEvent) :
            myEvent(myEvent)
    {
    }
    virtual ~MmEventRunnerBase ()
    {
    }
    // abstract, derived must have eventAction function
    virtual void eventAction () = 0;
    bool checkEvent ()
    {
        if (myEvent.isSet ())
        {
            eventAction ();
            return true;
        }
        return false;
    }

    void set()
    {
        myEvent.set();
    }
    void clear()
    {
        myEvent.clear();
    }

    uint32_t test() const {return myEvent.test();}

protected:
    MmEvent &myEvent;
};

// general event runner that takes a void function
class MmEventRunner: public MmEventRunnerBase
{
public:
    MmEventRunner(MmEvent &myEvent, std::function<void()> func) :
        MmEventRunnerBase(myEvent),
        m_func(func)
    {}
    virtual ~MmEventRunner () {}
    void eventAction()
    {
        m_func();
    }

private:
    std::function<void()> m_func;


};

template<class T>
class DbVariable : public MmEventRunnerBase
{
public:
    // constructor that allows initial value and injecting a event source
    DbVariable (const T& value, const std::string &key, MmEvent &myEvent,
                LMDBWrapper &db) :
    MmEventRunnerBase (myEvent),
    m_value (value),
    m_key (key),
    m_wasChangedLocally (false),
    m_wasSynced (false),
    m_keyExists(false),
    db (db)
    {
    }

    // constructor that defaults the value and sets initial state of event
    DbVariable (const std::string &key, LMDBWrapper &db, bool init) :
        MmEventRunnerBase (*(new MmEvent(init))),
        m_value (),
        m_key (key),
        m_wasChangedLocally (false),
        m_wasSynced (false),
        m_keyExists(false),
        db (db)
    {
    }

//    operator T () const
//    {
//        return m_value;
//    }

    operator const T& () const
    {
        return m_value;
    }

    //
    const T& operator= (const T& value)
    {
        if (memcmp (&value, &m_value, sizeof(value)))
        {
            m_value = value;
            flush ();
        }
        return value;
    }

    // pull value from db
    void requestSync ()
    {
        myEvent.set ();
        m_wasChangedLocally = false;
        m_wasSynced = false;
    }

    // push value to db, this is done automatically on write.
    void flush ()
    {
        m_wasChangedLocally = true;
        myEvent.set ();
    }

    // one time test of data complete
    bool wasSynced ()
    {
        bool temp = m_wasSynced;
        m_wasSynced = false;
        return temp;
    }

    bool keyExists()
    {
        return m_keyExists;
    }
    // for MmEventRunner
    void eventAction ()
    {
        if (m_wasChangedLocally) // updated locally, send to db
        {
            putEntry ();
        }
        else // read from db
        {
            getEntry ();
        }
    }

private:

    // read from database into object
    void getEntry ()
    {
        size_t inSize = sizeof(m_value);
        if (SUCCESS (db.lmdbRetrieve (m_key.c_str(), &m_value, inSize)))
        {
            m_wasChangedLocally = false;
            m_wasSynced = true;
            m_keyExists = true;
        }
    }

    // write object to database
    void putEntry ()
    {
        if (SUCCESS (
                db.lmdbStore (m_key.c_str(), &m_value, sizeof(m_value), 0)))
        {
            m_wasChangedLocally = false;
            myEvent.clear ();
            m_keyExists = true;
            m_wasSynced = true;
        }
        else
        {
            myEvent.set (); // increment
            if (myEvent.test() > 100) // give up after 10 trys
            {
                m_wasChangedLocally = false;
                myEvent.clear ();
            }
        }
    }

    T m_value;
    const std::string m_key;    // database key
    bool m_wasChangedLocally;   // dirty bit, needs flushing
    bool m_wasSynced;           // recently read
    bool m_keyExists;           // sucessfully read or written
    LMDBWrapper &db;            // ref to db

};

#endif /* SRC_MODMAN_MODEM_SUPPORT_H_ */
