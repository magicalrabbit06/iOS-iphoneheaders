/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MCSingleSignOnPayloadKerberosInfo : NSObject {

	NSString* _principalName;
	NSString* _realm;
	NSString* _certificateUUID;
	NSArray* _URLPrefixMatches;
	NSArray* _appIdentifierMatches;
	NSString* _accountGUID;
	NSString* _accountTypeGUID;

}

@property (nonatomic,retain) NSString * principalName;                    //@synthesize principalName=_principalName - In the implementation block
@property (nonatomic,retain) NSString * realm;                            //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSString * certificateUUID;                  //@synthesize certificateUUID=_certificateUUID - In the implementation block
@property (nonatomic,retain) NSArray * URLPrefixMatches;                  //@synthesize URLPrefixMatches=_URLPrefixMatches - In the implementation block
@property (nonatomic,retain) NSArray * appIdentifierMatches;              //@synthesize appIdentifierMatches=_appIdentifierMatches - In the implementation block
@property (nonatomic,retain) NSString * accountGUID;                      //@synthesize accountGUID=_accountGUID - In the implementation block
@property (nonatomic,retain) NSString * accountTypeGUID;                  //@synthesize accountTypeGUID=_accountTypeGUID - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(NSString *)certificateUUID;
-(void)setCertificateUUID:(NSString *)arg1 ;
-(NSString *)principalName;
-(NSArray *)URLPrefixMatches;
-(NSArray *)appIdentifierMatches;
-(BOOL)validateAppIdentifierMatch:(id)arg1 outError:(id*)arg2 ;
-(BOOL)validateURLPrefixMatch:(id)arg1 outNormalizedString:(id*)arg2 outError:(id*)arg3 ;
-(NSString *)accountGUID;
-(NSString *)accountTypeGUID;
-(void)setPrincipalName:(NSString *)arg1 ;
-(void)setRealm:(NSString *)arg1 ;
-(void)setURLPrefixMatches:(NSArray *)arg1 ;
-(void)setAppIdentifierMatches:(NSArray *)arg1 ;
-(void)setAccountGUID:(NSString *)arg1 ;
-(void)setAccountTypeGUID:(NSString *)arg1 ;
-(NSString *)realm;
@end
