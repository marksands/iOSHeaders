//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSDLayout<TSWPLayoutTarget>, TSUColor, TSWPLayoutManager, TSWPLineHintCollection;

@protocol TSWPLayoutOwner <NSObject>
- (TSWPLineHintCollection *)lineHintsForTarget:(TSDLayout<TSWPLayoutTarget> *)arg1;
- (id <TSWPTextWrap>)textWrapper;
- (void)layoutManager:(TSWPLayoutManager *)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(TSWPLayoutManager *)arg1;
- (_Bool)caresAboutStorageChanges;

@optional
- (_Bool)shouldAllowFinishingPartionedAttachmentLayout;
- (TSUColor *)textColorOverride;
- (_Bool)invalidateOnExactTextRangeLayout;
- (_Bool)forceWesternLineBreaking;
- (id <TSWPStyleProvider>)styleProvider;
@end

