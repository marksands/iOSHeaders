//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsUI/NUArticleActivityItemSource.h>

@class NSURL;

@interface NUArticleURLActivityItemSource : NUArticleActivityItemSource
{
    NSURL *_articleURL;
}

@property(readonly, nonatomic) NSURL *articleURL; // @synthesize articleURL=_articleURL;
- (void).cxx_destruct;
- (id)bodyStringForMailMessage;
- (id)marketingPageLink;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithHeadline:(id)arg1;

@end

