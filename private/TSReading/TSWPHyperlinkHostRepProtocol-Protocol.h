//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSDRep, TSWPHyperlinkField, TSWPSmartField;

@protocol TSWPHyperlinkHostRepProtocol <NSObject>
- (TSDRep *)hyperlinkContainerRep;
- (void)willDisplayEditHyperlinkUIForHyperlinkField:(TSWPHyperlinkField *)arg1 beginEditing:(_Bool)arg2;
- (struct CGRect)naturalBoundsRectForHyperlinkField:(TSWPHyperlinkField *)arg1;
- (void)setHighlightedHyperlinkField:(TSWPHyperlinkField *)arg1;
- (TSWPSmartField *)smartFieldAtPoint:(struct CGPoint)arg1;

@optional
- (_Bool)shouldDismissHyperlinkUIOnApplicationEnterBackground;
- (_Bool)shouldUseHyperlinkHighlight;
- (void)didDismissEditHyperlinkUIForHyperlinkField:(TSWPHyperlinkField *)arg1;
- (TSWPHyperlinkField *)hyperlinkFieldForEditingHyperlinkField:(TSWPHyperlinkField *)arg1;
@end

