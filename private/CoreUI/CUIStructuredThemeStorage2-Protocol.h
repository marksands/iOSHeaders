//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CUICommonAssetStorage, CUINamedImageDescription, NSArray, NSString;

@protocol CUIStructuredThemeStorage2
- (NSArray *)imagesWithName:(NSString *)arg1;
- (NSArray *)allImageNames;
- (const struct _renditionkeytoken *)renditionKeyForName:(NSString *)arg1;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;

@optional
- (CUICommonAssetStorage *)themeStore;
- (NSString *)renditionNameForKeyList:(struct _renditionkeytoken *)arg1;
- (void)removeImageNamed:(NSString *)arg1 withDescription:(CUINamedImageDescription *)arg2;
- (void)insertCGImage:(struct CGImage *)arg1 withName:(NSString *)arg2 andDescription:(CUINamedImageDescription *)arg3;
@end

