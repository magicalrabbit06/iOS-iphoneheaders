/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:38:26 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>
#import <CloudKit/NSSecureCoding.h>

@interface CKDatabaseOperationInfo : CKOperationInfo <NSSecureCoding> {

	int _databaseScope;

}

@property (assign,nonatomic) int databaseScope;              //@synthesize databaseScope=_databaseScope - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDatabaseScope:(int)arg1 ;
-(int)databaseScope;
@end
