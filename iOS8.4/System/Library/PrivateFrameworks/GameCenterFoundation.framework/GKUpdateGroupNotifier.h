/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GKUpdateGroup, NSLock, NSMutableArray, NSError;

@interface GKUpdateGroupNotifier : NSObject {

	GKUpdateGroup* _group;
	NSLock* _lock;
	NSMutableArray* _updateQueue;
	NSError* _error;

}

@property (assign,nonatomic) GKUpdateGroup * group;                     //@synthesize group=_group - In the implementation block
@property (retain) NSLock * lock;                                       //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateQueue;              //@synthesize updateQueue=_updateQueue - In the implementation block
@property (retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
-(id)retain;
-(void)dealloc;
-(id)init;
-(NSLock *)lock;
-(void)setGroup:(GKUpdateGroup *)arg1 ;
-(GKUpdateGroup *)group;
-(void)setLock:(NSLock *)arg1 ;
-(NSError *)error;
-(NSMutableArray *)updateQueue;
-(void)setUpdateQueue:(NSMutableArray *)arg1 ;
-(void)updateError:(id)arg1 ;
-(void)addUpdatesFromGroup:(id)arg1 ;
-(void)addUpdate:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)setError:(NSError *)arg1 ;
-(oneway void)release;
@end

