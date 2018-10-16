/*
 * modem_support.cpp


 *
 *  Created on: Oct 14, 2018
 *      Author: eng
 */


#include "modem_support.h"

int32_t basicModemVariables::getMdmDid () const
{
    return mdmDID;
}

void basicModemVariables::setMdmDid (int32_t mdmDid)
{
    mdmDID = mdmDid;
}

int32_t basicModemVariables::getMdmFanSpeed () const
{
    return mdmFanSpeed;
}

void basicModemVariables::setMdmFanSpeed (int32_t mdmFanSpeed)
{
    this->mdmFanSpeed = mdmFanSpeed;
}

uint32_t basicModemVariables::getMdmLinkUptime () const
{
    return mdmLinkUptime;
}

void basicModemVariables::setMdmLinkUptime (uint32_t mdmLinkUptime)
{
    this->mdmLinkUptime = mdmLinkUptime;
}

uint32_t basicModemVariables::getMdmOpStatus () const
{
    return mdmOpStatus;
}

void basicModemVariables::setMdmOpStatus (uint32_t mdmOpStatus)
{
    this->mdmOpStatus = mdmOpStatus;
}

int32_t basicModemVariables::getMdmRxBitRate () const
{
    return mdmRxBitRate;
}

void basicModemVariables::setMdmRxBitRate (int32_t mdmRxBitRate)
{
    this->mdmRxBitRate = mdmRxBitRate;
}

float basicModemVariables::getMdmRxBw () const
{
    return mdmRxBw;
}

void basicModemVariables::setMdmRxBw (float mdmRxBw)
{
    this->mdmRxBw = mdmRxBw;
}

int32_t basicModemVariables::getMdmRxFecRate () const
{
    return mdmRxFecRate;
}

void basicModemVariables::setMdmRxFecRate (int32_t mdmRxFecRate)
{
    this->mdmRxFecRate = mdmRxFecRate;
}

float basicModemVariables::getMdmRxFreq () const
{
    return mdmRxFreq;
}

void basicModemVariables::setMdmRxFreq (float mdmRxFreq)
{
    this->mdmRxFreq = mdmRxFreq;
}

float basicModemVariables::getMdmRxLed () const
{
    return mdmRxLed;
}

void basicModemVariables::setMdmRxLed (float mdmRxLed)
{
    this->mdmRxLed = mdmRxLed;
}

int32_t basicModemVariables::getMdmRxLoFreq () const
{
    return mdmRxLOFreq;
}

void basicModemVariables::setMdmRxLoFreq (int32_t mdmRxLoFreq)
{
    mdmRxLOFreq = mdmRxLoFreq;
}

uint32_t basicModemVariables::getMdmRxModeType () const
{
    return mdmRxModeType;
}

void basicModemVariables::setMdmRxModeType (uint32_t mdmRxModeType)
{
    this->mdmRxModeType = mdmRxModeType;
}

float basicModemVariables::getMdmRxSpreadFactor () const
{
    return mdmRxSpreadFactor;
}

void basicModemVariables::setMdmRxSpreadFactor (float mdmRxSpreadFactor)
{
    this->mdmRxSpreadFactor = mdmRxSpreadFactor;
}

float basicModemVariables::getMdmRxSymRate () const
{
    return mdmRxSymRate;
}

void basicModemVariables::setMdmRxSymRate (float mdmRxSymRate)
{
    this->mdmRxSymRate = mdmRxSymRate;
}

const char* basicModemVariables::getMdmSatelliteNetworkId () const
{
    return mdmSatelliteNetworkId;
}

void basicModemVariables::setMdmSatelliteNetworkId (
        const char* mdmSatelliteNetworkId)
{
    this->mdmSatelliteNetworkId = mdmSatelliteNetworkId;
}

uint32_t basicModemVariables::getMdmSatLinkStatus () const
{
    return mdmSatLinkStatus;
}

void basicModemVariables::setMdmSatLinkStatus (uint32_t mdmSatLinkStatus)
{
    this->mdmSatLinkStatus = mdmSatLinkStatus;
}

const char* basicModemVariables::getMdmSerialNumber () const
{
    return mdmSerialNumber;
}

void basicModemVariables::setMdmSerialNumber (const char* mdmSerialNumber)
{
    this->mdmSerialNumber = mdmSerialNumber;
}

float basicModemVariables::getMdmSmSqf () const
{
    return mdmSmSqf;
}

void basicModemVariables::setMdmSmSqf (float mdmSmSqf)
{
    this->mdmSmSqf = mdmSmSqf;
}

uint32_t basicModemVariables::getMdmSmTotalBytesDownlink () const
{
    return mdmSmTotalBytesDownlink;
}

void basicModemVariables::setMdmSmTotalBytesDownlink (
        uint32_t mdmSmTotalBytesDownlink)
{
    this->mdmSmTotalBytesDownlink = mdmSmTotalBytesDownlink;
}

uint32_t basicModemVariables::getMdmSmTotalBytesUplink () const
{
    return mdmSmTotalBytesUplink;
}

void basicModemVariables::setMdmSmTotalBytesUplink (
        uint32_t mdmSmTotalBytesUplink)
{
    this->mdmSmTotalBytesUplink = mdmSmTotalBytesUplink;
}

uint32_t basicModemVariables::getMdmSmTotalPacketsDownlink () const
{
    return mdmSmTotalPacketsDownlink;
}

void basicModemVariables::setMdmSmTotalPacketsDownlink (
        uint32_t mdmSmTotalPacketsDownlink)
{
    this->mdmSmTotalPacketsDownlink = mdmSmTotalPacketsDownlink;
}

uint32_t basicModemVariables::getMdmSmTotalPacketsUplink () const
{
    return mdmSmTotalPacketsUplink;
}

void basicModemVariables::setMdmSmTotalPacketsUplink (
        uint32_t mdmSmTotalPacketsUplink)
{
    this->mdmSmTotalPacketsUplink = mdmSmTotalPacketsUplink;
}

const char* basicModemVariables::getMdmSwVersion () const
{
    return mdmSwVersion;
}

void basicModemVariables::setMdmSwVersion (const char* mdmSwVersion)
{
    this->mdmSwVersion = mdmSwVersion;
}

int32_t basicModemVariables::getMdmTxBitRate () const
{
    return mdmTxBitRate;
}

void basicModemVariables::setMdmTxBitRate (int32_t mdmTxBitRate)
{
    this->mdmTxBitRate = mdmTxBitRate;
}

int32_t basicModemVariables::getMdmTxBucFreq () const
{
    return mdmTxBucFreq;
}

void basicModemVariables::setMdmTxBucFreq (int32_t mdmTxBucFreq)
{
    this->mdmTxBucFreq = mdmTxBucFreq;
}

float basicModemVariables::getMdmTxBw () const
{
    return mdmTxBw;
}

void basicModemVariables::setMdmTxBw (float mdmTxBw)
{
    this->mdmTxBw = mdmTxBw;
}

int32_t basicModemVariables::getMdmTxFecRate () const
{
    return mdmTxFecRate;
}

void basicModemVariables::setMdmTxFecRate (int32_t mdmTxFecRate)
{
    this->mdmTxFecRate = mdmTxFecRate;
}

float basicModemVariables::getMdmTxFreq () const
{
    return mdmTxFreq;
}

void basicModemVariables::setMdmTxFreq (float mdmTxFreq)
{
    this->mdmTxFreq = mdmTxFreq;
}

int32_t basicModemVariables::getMdmTxModeType () const
{
    return mdmTxModeType;
}

void basicModemVariables::setMdmTxModeType (int32_t mdmTxModeType)
{
    this->mdmTxModeType = mdmTxModeType;
}

int32_t basicModemVariables::getMdmTxMute () const
{
    return mdmTxMute;
}

void basicModemVariables::setMdmTxMute (int32_t mdmTxMute)
{
    this->mdmTxMute = mdmTxMute;
}

float basicModemVariables::getMdmTxPwr () const
{
    return mdmTxPwr;
}

void basicModemVariables::setMdmTxPwr (float mdmTxPwr)
{
    this->mdmTxPwr = mdmTxPwr;
}

float basicModemVariables::getMdmTxSnr () const
{
    return mdmTxSnr;
}

void basicModemVariables::setMdmTxSnr (float mdmTxSnr)
{
    this->mdmTxSnr = mdmTxSnr;
}

float basicModemVariables::getMdmTxSpreadFactor () const
{
    return mdmTxSpreadFactor;
}

void basicModemVariables::setMdmTxSpreadFactor (float mdmTxSpreadFactor)
{
    this->mdmTxSpreadFactor = mdmTxSpreadFactor;
}

float basicModemVariables::getMdmTxSymRate () const
{
    return mdmTxSymRate;
}

void basicModemVariables::setMdmTxSymRate (float mdmTxSymRate)
{
    this->mdmTxSymRate = mdmTxSymRate;
}

uint32_t basicModemVariables::getMdmUptime () const
{
    return mdmUptime;
}

void basicModemVariables::setMdmUptime (uint32_t mdmUptime)
{
    this->mdmUptime = mdmUptime;
}
