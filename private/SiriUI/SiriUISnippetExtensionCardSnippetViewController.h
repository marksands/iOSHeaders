//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUICardSnippetViewController.h>

@class NSExtension, SAUISnippet, SiriUISashItem;

@interface SiriUISnippetExtensionCardSnippetViewController : SiriUICardSnippetViewController
{
    SAUISnippet *_snippet;
    SiriUISashItem *_sashItem;
    NSExtension *_extension;
}

+ (void)initialize;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (id)snippet;
- (void).cxx_destruct;
- (void)_resumeTouchesIfNecessary;
- (void)_cancelTouchesIfNecessary;
- (id)sashItem;
- (void)setSnippet:(id)arg1;
- (id)initWithSnippet:(id)arg1 extension:(id)arg2;

@end

