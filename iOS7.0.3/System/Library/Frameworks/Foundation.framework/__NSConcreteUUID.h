/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSUUID.h>

@interface __NSConcreteUUID : NSUUID {

	unsigned char _uuidBytes[16];

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
-(SCD_Struct_NS94)_cfUUIDBytes;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(Class)classForCoder;
-(id)UUIDString;
-(void)getUUIDBytes:(unsigned char)arg1 ;
-(id)initWithUUIDString:(id)arg1 ;
@end

