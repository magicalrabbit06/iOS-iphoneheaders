/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Image.qldisplay/Image
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSCache, NSObject, NSMutableSet;

@interface QLImageLoader : NSObject {

	NSCache* _images;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _cancelledTasks;
	long long _currentLoadIndex;

}
+(id)sharedLoader;
-(void)_scheduleCacheCleaning;
-(void)cancelLoad:(long long)arg1 ;
-(long long)loadImageAtURL:(id)arg1 imageHint:(id)arg2 dispatchQueue:(id)arg3 replyHandler:(/*^block*/id)arg4 ;
-(void)_cleanCache;
-(BOOL)_isLoadCancelled:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clearCache;
@end
