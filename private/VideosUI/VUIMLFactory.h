//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVInterfaceCreating.h"
#import "_TVInterfaceCreatingPrivate.h"

@class NSDictionary, NSString;

@interface VUIMLFactory : NSObject <TVInterfaceCreating, _TVInterfaceCreatingPrivate>
{
    NSDictionary *_elementTypeLookup;
}

+ (void)_registerStyles;
+ (void)_registerElements;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *elementTypeLookup; // @synthesize elementTypeLookup=_elementTypeLookup;
- (void).cxx_destruct;
- (void)_parseAppConfigurationForElement:(id)arg1;
- (id)_styleSheetURLForTemplate:(id)arg1;
- (id)_imageProxyForElement:(id)arg1;
- (id)imageForResource:(id)arg1;
- (Class)collectionViewCellClassForElement:(id)arg1;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;
- (id)navigationControllerForTabIdentifier:(id)arg1;
- (id)viewForElement:(id)arg1 existingView:(id)arg2;
- (unsigned long long)vuiElementTypeForElement:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

