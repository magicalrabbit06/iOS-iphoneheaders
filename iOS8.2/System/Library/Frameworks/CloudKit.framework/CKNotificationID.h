/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSCopying.h>
#import <CloudKit/NSSecureCoding.h>

@class NSString;

@interface CKNotificationID : NSObject <NSCopying, NSSecureCoding> {

	NSString* _notificationUUID;

}

@property (nonatomic,copy) NSString * notificationUUID;              //@synthesize notificationUUID=_notificationUUID - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CKPropertiesDescription;
-(void)setNotificationUUID:(NSString *)arg1 ;
-(NSString *)notificationUUID;
@end
