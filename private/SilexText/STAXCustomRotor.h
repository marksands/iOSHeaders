//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAccessibilityCustomRotor.h"

@class NSOrderedSet;

@interface STAXCustomRotor : UIAccessibilityCustomRotor
{
    NSOrderedSet *_rotorItems;
}

+ (id)rotorWithName:(id)arg1;
@property(copy, nonatomic) NSOrderedSet *rotorItems; // @synthesize rotorItems=_rotorItems;
- (void).cxx_destruct;
- (id)description;
- (long long)indexOfRotorItem:(id)arg1;
- (id)rotorItemAfter:(id)arg1;
- (id)rotorItemBefore:(id)arg1;
- (id)initWithName:(id)arg1;

@end

