//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (UIAccessibilityOpaqueElementProvider)
+ (void)_accessibilityUpdateOpaqueFocusStateForTechnology:(id)arg1 oldElement:(id)arg2 newElement:(id)arg3;
- (void)_accessibilityDidReuseOpaqueElementView:(id)arg1;
- (id)_accessibilityReusableViewForOpaqueElement:(id)arg1;
- (id)_accessibilityCurrentlyFocusedElementForTechnology:(id)arg1;
- (void)_accessibilityUpdateFocusState:(id)arg1 forFocusedElement:(id)arg2;
- (void)_accessibilityDidFocusOnOpaqueElement:(id)arg1 technology:(id)arg2;
- (id)_accessibilityFocusStatePerTechnology;
@end
