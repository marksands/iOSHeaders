//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXSettings.h"

@interface PUSearchSettings : PXSettings
{
    _Bool _showKeyboardForZeroKeywords;
    _Bool _alwaysTrySiriSearch;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool alwaysTrySiriSearch; // @synthesize alwaysTrySiriSearch=_alwaysTrySiriSearch;
@property(nonatomic) _Bool showKeyboardForZeroKeywords; // @synthesize showKeyboardForZeroKeywords=_showKeyboardForZeroKeywords;
- (void)setDefaultValues;
- (id)parentSettings;

@end

