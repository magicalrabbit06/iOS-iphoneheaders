/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEFormulaRewrite_RelocatedMergeCells : NSObject {

	unordered_map<TSUColumnRowCoordinate, unsigned short, std::__1::hash<TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, unsigned short> > >* _mergeRangeAdjustments;

}
-(void)mergeRangeAt:(const SCD_Struct_TS287*)arg1 adjustedBy:(unsigned short)arg2 ;
-(unsigned short)mergeRangeAdjustmentForCoord:(const SCD_Struct_TS287*)arg1 ;
-(id)description;
@end
