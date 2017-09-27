//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _IKJSDataItemObserverRecord : NSObject
{
    struct {
        _Bool hasDidChangePropertyPath;
        _Bool hasDidChangeSubPropertyPath;
    } _observerFlags;
    _Bool _subscriptWildcard;
    id <IKJSDataItemObserver> _observer;
    NSString *_pathString;
}

@property(readonly, nonatomic, getter=isSubscriptWildcard) _Bool subscriptWildcard; // @synthesize subscriptWildcard=_subscriptWildcard;
@property(readonly, nonatomic) NSString *pathString; // @synthesize pathString=_pathString;
@property(readonly, nonatomic) __weak id <IKJSDataItemObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (_Bool)isAffectedByPropertyPathWithString:(id)arg1 subscript:(long long)arg2;
- (_Bool)isAffectedByPropertyPathWithString:(id)arg1;
- (id)initWithObserver:(id)arg1 pathString:(id)arg2 subscriptWildcard:(_Bool)arg3;

@end

