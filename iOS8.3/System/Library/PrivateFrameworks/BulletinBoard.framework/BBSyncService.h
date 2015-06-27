/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, BBSyncServiceDelegate;
@class IDSService, NSMutableArray, NSObject, NSString, NSMutableDictionary, NSTimer;

@interface BBSyncService : NSObject <IDSServiceDelegate> {

	IDSService* _service;
	NSMutableArray* _pendingDismissalDictionaries;
	NSMutableArray* _pendingDismissalIDs;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _queuedFeed;
	NSString* _queuedSectionID;
	NSString* _queuedUniversalSectionID;
	NSMutableDictionary* _deferredDismissalsBySectionID;
	NSTimer* _deferredTimer;
	int _lockNotifyToken;
	id<BBSyncServiceDelegate> _delegate;

}

@property (assign,nonatomic) id<BBSyncServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<BBSyncServiceDelegate>)arg1 ;
-(id<BBSyncServiceDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)sendPendingSyncedRemovals;
-(void)enqueueSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned)arg2 ;
-(void)_clearDeferredTimer;
-(id)dismissalSectionIdentifierForIncomingMessage:(id)arg1 ;
-(void)_sendSyncMessage:(id)arg1 ;
-(char)_hasDestination;
-(void)_addDeferredDismissalForBulletin:(id)arg1 feeds:(unsigned)arg2 ;
-(void)_reallyEnqueueBulletin:(id)arg1 feeds:(unsigned)arg2 ;
-(id)_syncAccount;
-(char)_syncHasDefaultPairedDevice;
-(id)_dismissalDictionaryForBulletin:(id)arg1 ;
-(id)_syncLocalDevices;
-(void)_deferredTimerFired:(id)arg1 ;
-(void)_sendDeferredDismissals;
-(void)sendSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned)arg2 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)_deviceLocked;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 ;
@end
