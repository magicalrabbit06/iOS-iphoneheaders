/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class APSConnection, NSData, NSObject;

@interface AADeviceInfo : NSObject {

	APSConnection* _apsConnection;
	BOOL _tokenDone;
	NSData* _token;
	NSObject*<OS_dispatch_semaphore> _tokenSema;

}
+(id)infoDictionary;
+(id)apnsToken;
+(id)productVersion;
+(id)appleIDClientIdentifier;
+(id)userAgentHeader;
+(id)serialNumber;
+(id)osVersion;
+(id)clientInfoHeader;
+(id)udid;
-(id)buildVersion;
-(id)apnsToken;
-(id)deviceInfoDictionary;
-(id)osName;
-(id)deviceClass;
-(id)wifiMacAddress;
-(id)deviceEnclosureColor;
-(BOOL)hasCellularCapability;
-(id)mobileEquipmentIdentifier;
-(id)internationalMobileEquipmentIdentity;
-(id)storageCapacity;
-(id)regionCode;
-(id)productVersion;
-(id)appleIDClientIdentifier;
-(id)userAgentHeader;
-(id)serialNumber;
-(id)deviceName;
-(id)osVersion;
-(id)clientInfoHeader;
-(id)udid;
-(id)deviceColor;
-(id)productType;
@end
