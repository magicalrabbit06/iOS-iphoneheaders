/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVRecursiveContainerSyncTaskGroup.h>

@interface BookmarkDAVRecursiveContainerSyncTaskGroup : CoreDAVRecursiveContainerSyncTaskGroup
-(id)dataContentType;
-(id)copyMultiGetTaskWithURLs:(id)arg1 ;
-(id)copyFolderMultiGetTaskWithURLs:(id)arg1 ;
-(bool)shouldSyncChildWithResourceType:(id)arg1 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(bool)arg6 context:(void*)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9 ;
@end

