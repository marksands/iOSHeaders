//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SearchUIRowModel.h"

@class NSString, SFSearchResult;

@interface SearchUISingleResultRowModel : NSObject <SearchUIRowModel>
{
    SFSearchResult *_result;
}

@property(retain) SFSearchResult *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (double)leadingSeparatorImageInset;
- (int)separatorStyle;
- (id)dragURL;
- (id)dragText;
- (id)descriptionText;
- (id)dragSubtitle;
- (id)dragTitle;
- (_Bool)isSuggestion;
- (_Bool)isContact;
- (_Bool)isCalculation;
- (id)dragAppBundleID;
- (_Bool)isDraggable;
- (_Bool)isTappable;
- (id)nextCard;
- (Class)viewClass;
- (id)reuseIdentifier;
- (id)punchouts;
- (id)cardSection;
- (id)identifyingResult;
- (id)initWithResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

