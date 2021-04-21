//
//  MethodTool.h
//  MyFramework
//
//  Created by 李祥 on 2021/4/16.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>


NS_ASSUME_NONNULL_BEGIN

@interface MethodTool : NSObject

/// 获取设备型号
+ (NSString *)iphoneType;

/// 错误信息文本输出
+ (NSString *)errorCodePrompt:(NSInteger)domain;

/// 获取UUID
+ (NSString *)getUUIDByKeyChain;

/// 下拉刷新
+ (void)headerRefreshWithTableView:(id)view
                        completion:(void (^)(void))completion;

/// 获取当天开始时间字符串,格式为yyyy-MM-dd 00:00:00
+ (NSString *)getTodayStartTime;

/// 获取当天结束时间字符串,格式为yyyy-MM-dd 23:59:59
+ (NSString *)getTodayEndTime;

/// 判断是不是九宫格,YES(是九宫格拼音键盘)
+ (BOOL)isNineKeyBoard:(NSString *)string;

/// 判断是不是Emoji表情,YES(是Emoji表情)
+ (BOOL)stringContainsEmoji:(NSString *)string;

/// 弹出UIAlertController,(弹出在window上)
//+ (void)showAlertWithTitle:(NSString *)title
//                   message:(NSString *)message
//         cancelButtonTitle:(NSString *)cancelButtonTitle
//         otherButtonTitles:(NSArray *)otherButtonTitles
//             actionHandler:(void (^)(NSInteger buttonIndex))actionHandler;

/// 弹出UIAlertController,(vc指定的控制器上)
+ (void)presentVc:(UIViewController *)vc
            Title:(NSString *)title
          message:(NSString *)message
cancelButtonTitle:(NSString *)cancelButtonTitle
otherButtonTitles:(NSArray *)otherButtonTitles
    actionHandler:(void (^)(NSInteger buttonIndex))actionHandler;

/// 获取沙盒
+ (NSString *)getSandBoxFilePath:(NSString *)fileName;

/// 沙盒中删除文件
+ (BOOL)removeDataWithFilePath:(NSString *)fileName;

/// 将字符串经纬度转化为 CLLocationCoordinate2D
+ (CLLocationCoordinate2D)locationForItemWithLat:(NSString *)latitudeStr
                                          andLon:(NSString *)longtitudeStr;

/// 通过颜色生成原点图片
+ (UIImage *)initWithColor:(UIColor *)color rect:(CGRect)rect;

/// 获取Documents路径
+ (NSString *)getDocumentsPath:(NSString *)path;

/// 是否在台湾
//+ (BOOL)isSingleTappedAtCoordinate:(CLLocationCoordinate2D)coord;

/// 是否是数字
+ (BOOL)isNumber:(NSString *)strValue;

/// 转成原始图片
+ (UIImage *)imageWithOriginal:(NSString *)imageName;

/// 是否开启定位
+ (BOOL)getUserLocationAuth;

/// 字典转json字符串方法
+ (NSString *)convertToJsonData:(NSDictionary *)dict;



@end

NS_ASSUME_NONNULL_END
