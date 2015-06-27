/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierMat4 : TSDGLShaderQualifier {

	CATransform3D _transform3D;
	CATransform3D _proposedTransform3D;

}

@property (nonatomic,readonly) CATransform3D transform3D;                    //@synthesize transform3D=_transform3D - In the implementation block
@property (assign,nonatomic) CATransform3D proposedTransform3D;              //@synthesize proposedTransform3D=_proposedTransform3D - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(id)initWithTransform3D:(CATransform3D)arg1 ;
-(void)setProposedTransform3D:(CATransform3D)arg1 ;
-(CATransform3D)proposedTransform3D;
-(id)description;
-(CATransform3D)transform3D;
@end
