//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NUGLTexture;

@interface NUGLSampler : NSObject
{
    unsigned int _wrapMode;
    unsigned int _minificationFilter;
    unsigned int _magnificationFilter;
    NUGLTexture *_texture;
}

@property(nonatomic) unsigned int magnificationFilter; // @synthesize magnificationFilter=_magnificationFilter;
@property(nonatomic) unsigned int minificationFilter; // @synthesize minificationFilter=_minificationFilter;
@property(nonatomic) unsigned int wrapMode; // @synthesize wrapMode=_wrapMode;
@property(readonly, nonatomic) NUGLTexture *texture; // @synthesize texture=_texture;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTexture:(id)arg1;
- (id)init;

@end

