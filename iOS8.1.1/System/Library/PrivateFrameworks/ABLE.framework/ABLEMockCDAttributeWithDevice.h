/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ABLE/ABLEMockCDAttributeProtocol.h>

@class CDDevice, CDAttribute;

@interface ABLEMockCDAttributeWithDevice : NSObject <ABLEMockCDAttributeProtocol> {

	CDDevice* _device;
	CDAttribute* _attribute;

}

@property (readonly) CDDevice * device;                    //@synthesize device=_device - In the implementation block
@property (readonly) CDAttribute * attribute;              //@synthesize attribute=_attribute - In the implementation block
-(id)initWithDevice:(id)arg1 attribute:(id)arg2 ;
-(CDAttribute *)attribute;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(CDDevice *)device;
@end
