/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <CloudDocsDaemon/BRCForegroundClient.h>
#import <CloudDocsDaemon/BRCOperationSubclass.h>

@class NSString, BRCUserNotification, BRCAccountSession, NSArray, NSURL, CKShareID, CKShareInfo, BRCItemID, BRCLocalContainer, BRCPrivateLocalContainer, BRCXPCClient;

@interface BRCSharingAcceptFlowOperation : _BRCOperation <BRCForegroundClient, BRCOperationSubclass> {

	BRCUserNotification* _userNotification;
	BRCAccountSession* _session;
	NSArray* _acceptationFlow;
	unsigned long long _stepIndex;
	id _logSection;
	NSURL* _shareURL;
	CKShareID* _shareID;
	CKShareInfo* _shareInfo;
	BRCItemID* _sharedItemID;
	NSString* _unsaltedBookmarkData;
	BRCLocalContainer* _localContainer;
	BRCPrivateLocalContainer* _aliasContainer;
	NSURL* _shareDocumentURL;
	NSString* _shareDocumentFileProviderString;
	BRCXPCClient* _xpcClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
+(id)_runningShareIDs;
+(void)_openShareURLInWebBrowser:(id)arg1 withReason:(id)arg2 ;
+(void)_openiCloudSettings;
+(void)_openAppStoreForShareURL:(id)arg1 ;
-(NSString *)identifier;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)_performNextStep;
-(BOOL)_isOwnerOrShareAlreadyAccepted;
-(BOOL)_isOwner;
-(id)initWithShareURL:(id)arg1 client:(id)arg2 session:(id)arg3 ;
-(void)_isURLWellFormed;
-(void)_isAppInstalled;
-(void)_isUserSignedInToiCloudDrive;
-(void)_isAppProfileEnabled;
-(void)_fetchShareInfo;
-(void)_showSharingOpenDialog;
-(void)_acceptShareURL;
-(void)_createNecessaryContainers;
-(void)_waitForSharedItemToSyncDown;
-(void)_waitForFaultToBeOnDisk;
-(void)_downloadDocument;
-(void)_openSharedDocument;
@end

