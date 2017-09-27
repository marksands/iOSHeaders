//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISearchController.h"

@class PSKeyboardNavigationSearchBar, UIViewController<PSKeyboardNavigationSearchResultsController>;

@interface PSKeyboardNavigationSearchController : UISearchController
{
    UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController;
    PSKeyboardNavigationSearchBar *searchBar;
}

@property(retain, nonatomic) PSKeyboardNavigationSearchBar *searchBar; // @synthesize searchBar;
@property(retain, nonatomic) UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController; // @synthesize searchResultsController;
- (void).cxx_destruct;
- (void)_upArrowKeyPressed;
- (void)_downArrowKeyPressed;
- (void)_escapeKeyPressed;
- (id)initWithSearchResultsController:(id)arg1;

@end

