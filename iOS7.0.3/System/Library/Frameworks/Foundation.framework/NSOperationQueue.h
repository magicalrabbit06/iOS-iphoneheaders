/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface NSOperationQueue : NSObject {

	id _private;
	void* _reserved;

}
+(id)currentQueue;
+(id)mainQueue;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)executeAndWaitForBlock:(/*^block*/ id)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(id)__;
-(void)__:(id)arg1 ;
-(int)maxConcurrentOperationCount;
-(BOOL)overcommitsOperations;
-(void)setOvercommitsOperations:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isSuspended;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setMaxConcurrentOperationCount:(int)arg1 ;
-(void)cancelAllOperations;
-(void)waitUntilAllOperationsAreFinished;
-(void)addOperationWithBlock:(/*^block*/ id)arg1 ;
-(void)addOperation:(id)arg1 ;
-(id)operations;
-(unsigned)operationCount;
-(void)setSuspended:(BOOL)arg1 ;
@end
