//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLKUIGLProgram : NSObject
{
    unsigned int _program;
    unsigned int _isValidated:1;
    unsigned int _isValidateSuccessful:1;
    struct CLKUIGLUniforms _uniforms;
    NSString *_name;
}

+ (id)programWithName:(id)arg1 vsh:(const char *)arg2 fsh:(const char *)arg3;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (struct CLKUIGLUniforms)uniforms;
- (_Bool)validate;
- (void)use;
- (id)initWithName:(id)arg1 gid:(unsigned int)arg2 uniforms:(struct CLKUIGLUniforms)arg3;

@end

