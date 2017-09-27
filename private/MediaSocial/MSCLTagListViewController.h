//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKUIViewController.h"

#import "SKUIArtworkRequestDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MSCLConfiguration, NSArray, NSString, SKUIResourceLoader, SSVLoadURLOperation, UIImage, UITableView;

@interface MSCLTagListViewController : SKUIViewController <SKUIArtworkRequestDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SKUIResourceLoader *_artworkLoader;
    MSCLConfiguration *_configuration;
    NSArray *_defaultTagSuggestions;
    id <MSCLTagListDelegate> _delegate;
    UIImage *_placeholderImage;
    SSVLoadURLOperation *_loadTagsOperation;
    NSArray *_matchedTagSuggestions;
    NSString *_tagString;
    UITableView *_tableView;
}

@property(nonatomic) __weak id <MSCLTagListDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MSCLConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_reloadWithMatchedTags:(id)arg1;
- (void)_loadThumbnailsForTags:(id)arg1 reason:(long long)arg2;
- (id)_imageDataConsumer;
- (id)_activeTagSuggestions;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)reloadWithTagString:(id)arg1;
- (id)existingTagForString:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

