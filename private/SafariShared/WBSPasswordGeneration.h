//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WBSPasswordGeneration : NSObject
{
}

+ (_Bool)passwordGenerationIsDisallowedByRequirements:(id)arg1;
+ (_Bool)manualPasswordGenerationIsDisallowedByRequirements:(id)arg1;
+ (id)protectionSpaceForGeneratedPasswordsInProtectionSpace:(id)arg1;
+ (id)defaultRequirementsForURL:(id)arg1;
+ (id)defaultRequirementsForDomain:(id)arg1;
+ (id)generatedPasswordMatchingRequirements:(id)arg1;
+ (id)updatedRequirements:(id)arg1 respectingMaxLength:(unsigned long long)arg2;

@end

