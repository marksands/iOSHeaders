//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTLCaptureScope.h"

@class NSString;

@interface MTLCaptureScope : NSObject <MTLCaptureScope>
{
    NSString *_label;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
}

@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(copy) NSString *label; // @synthesize label=_label;
- (void)endScope;
- (void)beginScope;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

