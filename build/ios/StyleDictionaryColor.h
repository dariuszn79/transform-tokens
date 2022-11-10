
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Thu, 10 Nov 2022 11:16:38 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorPrimaryPrimary100,
ColorPrimaryPrimary75,
ColorPrimaryPrimary50,
ColorPrimaryPrimary25,
ColorPrimaryPrimary05,
ColorSecondarySecondary100,
ColorSecondarySecondary50,
ColorSecondarySecondary75,
ColorSecondarySecondary25,
ColorSecondarySecondary05,
ColorTertiaryTertiary100,
ColorTertiaryTertiary75,
ColorTertiaryTertiary50,
ColorTertiaryTertiary25,
ColorTertiaryTertiary05,
ColorLightLight100,
ColorLightLight75,
ColorLightLight50,
ColorLightLight25,
ColorLightLight05,
ColorLightWhite,
ColorLightTransparent,
ColorDarkBlack100,
ColorDarkBlack75,
ColorDarkBlack50,
ColorDarkBlack25,
ColorDarkBlack05,
ColorFunctionalError,
ColorFunctionalWarning,
ColorFunctionalSucess,
ColorMaterialsG1Blue,
ColorMaterialsG1Green,
ColorMaterialsG1Pink,
ColorMaterialsG1Black,
ColorMaterialsG1White
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
