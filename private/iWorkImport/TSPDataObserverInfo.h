//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSPData;

__attribute__((visibility("hidden")))
@interface TSPDataObserverInfo : NSObject
{
    id _observer;
    TSPData *_data;
    CDUnknownBlockType _completionHandler;
    _Bool _isInternalObserver;
    unsigned long long _options;
}

@property(readonly, nonatomic) _Bool isInternalObserver; // @synthesize isInternalObserver=_isInternalObserver;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)notifyWithStatus:(long long)arg1 info:(id)arg2;
- (_Bool)shouldClearObserverForStatus:(long long)arg1;
- (_Bool)shouldNotifyStatus:(long long)arg1;
- (id)initWithObserver:(id)arg1 data:(id)arg2 options:(unsigned long long)arg3 isInternalObserver:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end

