//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FMAppShortcutManager : NSObject
{
}

+ (id)sharedInstance;
- (void)clearShortcutItems;
- (id)createShortcutForItem:(id)arg1;
- (void)removeShortcutItemWithIentifier:(id)arg1;
- (void)setShortcutItem:(id)arg1;
@property(readonly) _Bool hasShortcutItems;
- (void)setShortcutItems:(id)arg1;

@end

