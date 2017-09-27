//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessageUI/MFComposeRecipient.h>

@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient
{
    NSArray *_children;
}

- (id)childrenWithCompleteMatches;
- (id)completelyMatchedAttributedStrings;
- (_Bool)wasCompleteMatch;
- (_Bool)isEqual:(id)arg1;
- (id)commentedAddress;
- (id)address;
- (int)recordID;
- (void *)record;
- (int)property;
- (_Bool)isRemovableFromSearchResults;
- (_Bool)isGroup;
- (id)sortedChildren;
- (void)_populateSortedChildren;
- (id)children;
- (id)unlocalizedLabel;
- (id)placeholderName;
- (id)compositeName;
- (id)label;
- (id)displayString;
- (id)initWithChildren:(id)arg1 displayString:(id)arg2;
- (void)dealloc;

@end

