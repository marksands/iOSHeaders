//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKUILocalizedStringDictionary;

@interface MSCLLocalization : NSObject
{
    SKUILocalizedStringDictionary *_localizedStrings;
}

+ (id)defaultLocalization;
- (void).cxx_destruct;
- (id)localizedStringForKey:(id)arg1 table:(id)arg2 context:(id)arg3;
- (id)localizedStringForCategoryName:(id)arg1 context:(id)arg2;

@end

