//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariServices/_SFActivityItemProvider.h>

@class UIPrintPageRenderer, _SFPrintController;

@interface _SFPrintActivityItemProvider : _SFActivityItemProvider
{
    UIPrintPageRenderer *_printPageRenderer;
    _Bool _hasReservedPrintInteractionController;
    _SFPrintController *_printController;
}

@property(readonly, nonatomic) _Bool hasReservedPrintInteractionController; // @synthesize hasReservedPrintInteractionController=_hasReservedPrintInteractionController;
@property(readonly, nonatomic) _SFPrintController *printController; // @synthesize printController=_printController;
- (void).cxx_destruct;
- (id)item;
- (void)dealloc;
- (id)initWithPrintController:(id)arg1;

@end

