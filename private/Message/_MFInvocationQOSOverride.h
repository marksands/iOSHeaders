//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MFInvocationQOSOverride : NSObject
{
    struct pthread_override_s *_override;
    _Bool _lowPriority;
    unsigned int _desiredQoS;
    struct _opaque_pthread_t *_pthread;
}

@property(readonly, nonatomic) struct _opaque_pthread_t *pthread; // @synthesize pthread=_pthread;
@property(readonly, nonatomic) unsigned int desiredQoS; // @synthesize desiredQoS=_desiredQoS;
@property(readonly, nonatomic, getter=isLowPriority) _Bool lowPriority; // @synthesize lowPriority=_lowPriority;
- (_Bool)removeOverride;
- (void)applyOverrideWhileForeground:(_Bool)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithPthread:(struct _opaque_pthread_t *)arg1 desiredQoS:(unsigned int)arg2 lowPriority:(_Bool)arg3;

@end

