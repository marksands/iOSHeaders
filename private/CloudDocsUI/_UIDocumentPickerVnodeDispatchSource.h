//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSObject<OS_dispatch_source>, NSURL;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerVnodeDispatchSource : NSObject <NSCopying>
{
    NSObject<OS_dispatch_source> *_source;
    id <_UIDocumentPickerVnodeDispatchSourceDelegate> _target;
    NSURL *_url;
}

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (void)event;
@property(readonly, nonatomic) NSURL *url;
- (id)initWithTarget:(id)arg1 url:(id)arg2 queue:(id)arg3;

@end

