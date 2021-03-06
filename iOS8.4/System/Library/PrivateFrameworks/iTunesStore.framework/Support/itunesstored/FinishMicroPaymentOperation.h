/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class StoreKitClientIdentity, NSString, NSNumber;

@interface FinishMicroPaymentOperation : ISOperation {

	StoreKitClientIdentity* _clientIdentity;
	NSString* _transactionIdentifier;
	NSNumber* _userDSID;

}

@property (copy) StoreKitClientIdentity * clientIdentity; 
@property (copy) NSString * transactionIdentifier; 
@property (retain) NSNumber * userDSID; 
-(NSNumber *)userDSID;
-(void)setUserDSID:(NSNumber *)arg1 ;
-(StoreKitClientIdentity *)clientIdentity;
-(void)setClientIdentity:(StoreKitClientIdentity *)arg1 ;
-(BOOL)_parseResponse:(id)arg1 returningError:(id*)arg2 ;
-(void)dealloc;
-(void)run;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)transactionIdentifier;
@end

