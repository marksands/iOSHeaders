//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "_SFBookmarkInfoViewControllerDelegate.h"

@class NSString, WebBookmarkCollection, _SFBookmarkInfoViewController;

@interface _SFSingleBookmarkNavigationController : UINavigationController <_SFBookmarkInfoViewControllerDelegate>
{
    _SFBookmarkInfoViewController *_infoViewController;
    WebBookmarkCollection *_collection;
    _Bool _delegateNotifiedOfResult;
    id <_SFSingleBookmarkNavigationControllerDelegate> _bookmarkNavDelegate;
}

+ (id)newBookmarkInfoViewControllerWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(_Bool)arg3 toFavorites:(_Bool)arg4 willBeDisplayedModally:(_Bool)arg5;
@property(nonatomic) __weak id <_SFSingleBookmarkNavigationControllerDelegate> bookmarkNavDelegate; // @synthesize bookmarkNavDelegate=_bookmarkNavDelegate;
- (void).cxx_destruct;
- (_Bool)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg1;
- (_Bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (void)bookmarkInfoViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (_Bool)prepareForPresentationForAddingBookmark:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentBookmark:(id)arg3;
- (id)initForAddingToFavoritesInCollection:(id)arg1;
- (id)initWithCollection:(id)arg1;
- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2;
- (id)_initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(_Bool)arg3 toFavorites:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

