/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class NSData, NSString, SSURLConnectionRequest;

@interface RadioReportIssueRequest : RadioRequest {

	NSData* _data;
	NSString* _description;
	int _issueType;
	SSURLConnectionRequest* _request;

}
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)cancel;
-(id)initWithIssueType:(int)arg1 description:(id)arg2 data:(id)arg3 ;
-(id)initWithIssueType:(int)arg1 description:(id)arg2 ;
-(void).cxx_destruct;
@end
