//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

#import "SAUITemplateMonogrammable.h"

@class NSArray, NSString;

@interface SAUITemplateCollectionViewCell : SAUITemplateBaseItem <SAUITemplateMonogrammable>
{
}

+ (id)collectionViewCellWithDictionary:(id)arg1 context:(id)arg2;
+ (id)collectionViewCell;
@property(copy, nonatomic) NSString *titleText;
@property(copy, nonatomic) NSArray *themeImages;
@property(copy, nonatomic) NSString *subtitleText;
@property(nonatomic) _Bool sizeToFitImage;
@property(copy, nonatomic) NSArray *monogramName;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

