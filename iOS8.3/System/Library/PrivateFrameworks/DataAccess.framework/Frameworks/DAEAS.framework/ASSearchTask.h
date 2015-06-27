/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:24:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class DASearchQuery;

@interface ASSearchTask : ASTask {

	DASearchQuery* _query;
	int _numDownloadedElements;

}

@property (nonatomic,retain) DASearchQuery * query;                  //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) int numDownloadedElements;              //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
-(id)description;
-(DASearchQuery *)query;
-(void)setQuery:(DASearchQuery *)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(int)numDownloadedElements;
-(void)setNumDownloadedElements:(int)arg1 ;
-(int)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
@end
