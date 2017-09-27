//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface NTKSensitiveUIMonitor : NSObject
{
    NSHashTable *_observers;
    int _notifyToken;
    _Bool _hideSensitiveUI;
    _Bool _needPrefsUpdate;
}

+ (id)sharedMonitor;
- (void).cxx_destruct;
- (_Bool)faceStyleIsSensitive:(long long)arg1;
- (_Bool)shouldHideSensitiveUIForFaceStyle:(long long)arg1;
- (_Bool)shouldHideSensitiveUI;
- (void)removeSensitiveUIObserver:(id)arg1;
- (void)addSensitiveUIObserver:(id)arg1;

@end

