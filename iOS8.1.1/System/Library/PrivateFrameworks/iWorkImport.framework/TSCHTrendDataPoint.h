/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TSCHTrendDataPoint : NSObject {

	double mDataPointX;
	double mDataPointY;
	unsigned long long mGroupIndex;

}
-(id)initWithPointX:(double)arg1 pointY:(double)arg2 forGroup:(unsigned long long)arg3 ;
-(long long)xValueCompare:(id)arg1 ;
-(double)dataPointX;
-(double)dataPointY;
-(unsigned long long)groupIndex;
@end
