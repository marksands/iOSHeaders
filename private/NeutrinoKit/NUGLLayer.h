//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAEAGLLayer.h"

@class NUGLContext, NUGLRenderbuffer;

@interface NUGLLayer : CAEAGLLayer
{
    NUGLContext *_context;
    NUGLRenderbuffer *_buffer;
}

- (void).cxx_destruct;
- (void)reset:(id)arg1;
- (void)draw:(id)arg1;
- (void)_drawInBuffer:(id)arg1 context:(id)arg2;
- (void)display;
- (id)init;

@end

