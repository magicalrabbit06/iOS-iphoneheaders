/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:14:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GAXVerifierDelegate <NSObject>
@required
-(/*function pointer*/void**)gaxStateForIntegrityVerifier:(id)arg1;
-(void)didFinishVerificationWithIntegrityVerifier:(id)arg1;
-(void)willBeginVerificationWithIntegrityVerifier:(id)arg1;
-(BOOL)sessionAppIsFrontmostForIntegrityVerifier:(id)arg1;
-(void)shouldAttemptAppRelaunchWithIntegrityVerifier:(id)arg1;
-(id)expectedSessionAppIdentifierForIntegrityVerifier:(id)arg1;
-(BOOL)sessionAppIsPreferencesForIntegrityVerifier:(id)arg1;
-(BOOL)hasSystemPasscodeForIntegrityVerifier:(id)arg1;
-(unsigned long long)sessionAppRelaunchAttemptsForIntegrityVerifier:(id)arg1;
-(void)didVerifyEvent:(unsigned long long)arg1 withOutcome:(unsigned long long)arg2 withIntegrityVerifier:(id)arg3;
-(BOOL)sessionAppIsPurpleBuddyForIntegrityVerifier:(id)arg1;

@end

