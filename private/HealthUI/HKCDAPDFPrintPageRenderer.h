//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPrintPageRenderer.h>

@interface HKCDAPDFPrintPageRenderer : UIPrintPageRenderer
{
    struct CGRect _paperRectOverride;
    struct CGRect _printableRectOverride;
}

- (void)drawFooterForPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (struct CGRect)printableRect;
- (struct CGRect)paperRect;
- (id)initWithPaperRect:(struct CGRect)arg1 horizontalMargin:(double)arg2 verticalMargin:(double)arg3;

@end
