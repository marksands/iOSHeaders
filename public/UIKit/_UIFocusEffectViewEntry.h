//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIVisualEffectViewEntry.h>

@class _UIFocusEffectSettings;

__attribute__((visibility("hidden")))
@interface _UIFocusEffectViewEntry : _UIVisualEffectViewEntry
{
    _UIFocusEffectSettings *_settings;
}

@property(copy, nonatomic) _UIFocusEffectSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (id)description;
- (_Bool)hasTransform;
- (_Bool)shouldAnimateProperty:(id)arg1;
- (id)initWithSettings:(id)arg1;

@end

