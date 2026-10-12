# BW Risk Assessment — Risk Management Report
**Date: 2026-10-12 (Monday), ~10:42 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Fifteenth BW report overall, first of the new week — follows the trader's own 09:39 ET Monday run note (no trade, 17th-plus consecutive no-trade week) and this morning's GS (10:15 ET), JPM (09:40 ET), and MS (10:13 ET) reports, all now on file for the week.

---

## Overall Portfolio Risk Grade: **D-** — held, unchanged from 10/9 ~14:43 ET

## Single biggest risk right now
**Still the rate/macro data blindness, now entering its second full week unresolved — 11+ calendar days since any desk could confirm a same-day 10-year Treasury print, and this desk's own fresh WebSearch this run reproduced the identical wall (best result: a Dow Jones "Data Talk" item from June 2026).** Every DCF-derived verdict in this book (five of six holdings, plus today's new AMD build) rests on MS's 10/1 Rf 5.29% input with no live mechanism to detect if it has moved. That alone would hold the grade at D-. Two things sharpen it further this run, in the spirit of calling sizing complacency plainly rather than re-flagging it quietly: **first, XLE's DCF gap just set a new worst-ever reading for a sixth consecutive report (-11.06%) on a Brent assumption now 11+ reports stale**, while the Hormuz thesis it's held to hedge remains genuinely contested — this desk's own fresh WebSearch today found a second, more credible source (an AFP/Kpler shipping-data analysis) partially corroborating Friday's single-source "normalizing" claim, but it's mid-September vintage, Iran's IRGC is on record calling the strait still blocked, and flows remain under half of pre-war levels — still not a clean resolution either way. **Second, GEHC's valuation drift deserves a plainer flag than it has gotten:** MS's gap crossed its own historical noise band for the first time this run (-3.01%), and the stock is now running further above its own closed $62-65 continuation band on no sourced catalyst (+2.34% live today, its biggest percentage move of any holding) for a fourth-plus consecutive session — holding a position that keeps extending away from fair value with nothing new behind it and no mechanism left to act on it (BR closed the upside-trigger question 10/5) is a sizing posture worth naming, not just logging.

---

## Portfolio snapshot (live, 2026-10-12 ~10:42 ET)

`get_portfolio`: total_value **$100.75281477** (cash $56.10 + equity $44.65281477). Pool ≈ **$50.75281477**, a **+$0.75281477 (+1.51%) accumulated profit** — essentially flat vs. this morning's 09:39 ET read (+1.67%), a modest one-cent-per-dollar pullback from the all-time-high reading, not a reversal.

`get_equity_quotes` (live last-trade vs. 10/9's official close):

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized P&L (cost) | Day Δ (vs 10/9 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $225.425 | $5.597 | 12.53% | 11.03% | +11.95% ($201.40) | **-1.68% (today's worst mover)** |
| VTI | 0.036690 | $381.605 | $14.002 | 31.36% | 27.59% | +3.02% ($370.40) | -0.09% |
| VXUS | 0.154525 | $84.522 | $13.063 | 29.26% | 25.74% | +0.47% ($84.13) | -0.35% |
| OMCL | 0.106405 | $36.110 | $3.842 | 8.61% | 7.57% | -23.14% ($46.99) | +0.81% |
| XLE | 0.086775 | $65.740 | $5.705 | 12.77% | 11.24% | +14.09% ($57.62) | +1.01% |
| GEHC | 0.036393 | $67.280 | $2.449 | 5.48% | 4.82% | -2.05% ($68.69) | **+2.34% (today's biggest mover)** |
| Cash (deployable) | — | — | $6.10 | — | 12.02% | — | — |

NVDA+OMCL combined concentration: **21.14% of equity** — 3.86pp buffer to the 25% backstop trigger, a touch wider than Friday's 3.70pp (NVDA's pullback did more to shrink the combined figure than OMCL's gain added). NVDA alone: **12.53% of equity**, comfortably below the 18-20% single-name trigger; **11.03% of pool** vs. BR's 10% target (+1.03pp over, inside the 5pp drift band, actually easing vs. Friday's +1.22pp). OMCL's DCA gate (rule 18: fires at $2.50 accumulated pool profit): **~$1.75 away**, essentially flat vs. Friday's closest-yet $1.71-1.74 reads — still not fired, still the closest sustained mechanical lever in the book. GEHC ($67.28) is now clearly above the top edge of its closed $62-65 continuation band, not just marginally.

**Notable: NVDA was today's only meaningfully red holding (-1.68%) while GEHC ran +2.34% with no identified catalyst** — a divergence pattern this desk has now seen in both directions over the past week (NVDA red/book green on 10/9 AM, now NVDA red/GEHC the outlier green today) without ever finding a sourced reason for either side.

---

## 1. Correlation analysis between holdings

- **NVDA / VTI / VXUS**: unchanged — shared mega-cap AI/semis look-through exposure remains the dominant correlation cluster. The two core ETFs (60.62% of equity combined) again moved independently of NVDA today (both roughly flat-to-down while NVDA fell harder), consistent with the standing view that the ETFs are not purely NVDA-driven minute-to-minute even though the longer-run look-through concentration stands.
- **NVDA / OMCL / GEHC / XLE / AMD (unheld, context only)**: low business-fundamentals correlation across these names, but a shared discount-rate factor via DCF valuation — the channel frozen by the stale-rate problem above. Today's new AMD build (MS, -62.2% to -75.7%, the widest hard pass this desk has seen cited) is a fifth AI-adjacent name (after AVGO, SNDK, MRVL, MU) MS/GS have now rejected on valuation grounds — none of it moves NVDA's own number, but it is a convergent data point on how stretched this entire factor looks across the board MS has actually built.
- **XLE vs. everything else — still an open question, now with one genuinely new data point.** This desk's fresh WebSearch today surfaced an AFP analysis citing Kpler/Lloyd's List data: oil flows through Hormuz have risen to roughly 8 million bpd (vs. ~18 million bpd pre-war) since the US began escorting ships in early July — real recovery, but still well under half of normal, and Iran's IRGC is on record saying transit requires Tehran's approval, with Chinese shipping giants still avoiding the strait since late July. This is a second, more credible source than Friday's single idnfinancials.com claim, pointing the same direction (partial normalization) — but "partial recovery, contested, mid-September data" is not "normal," and it still doesn't explain today's mid-pack +1.01% XLE move one way or the other.
- **VTI / VXUS**: moderate positive correlation (global equity beta), genuinely diversifying on geography/currency — unchanged, behaving as designed again today (both modestly red, in step with each other).
- **OMCL / GEHC**: both "healthcare," different sub-sectors, low correlation beyond the label — today's and recent sessions' moves (OMCL +0.81%, GEHC +2.34%) continue to look idiosyncratic to each name rather than a shared healthcare-sector move.

## 2. Sector concentration (% of equity, look-through where estimable)

| Sector / bucket | % of equity | Note |
|---|---|---|
| Technology / Semis / AI (look-through: direct NVDA + VTI's/VXUS's own tech weight) | **~27-30% (estimate)** | Direct NVDA alone is 12.53%; remainder is look-through via the two core ETFs — standing estimate, not re-derived this run |
| Diversified US equity (VTI, ex-tech-look-through) | 31.36% (gross) | Largest single line item, a basket not a sector bet |
| Diversified ex-US equity (VXUS, ex-tech-look-through) | 29.26% (gross) | Second-largest line item, same caveat |
| Energy (XLE) | 12.77% | Satellite/hedge sleeve — see correlation discussion above |
| Healthcare — tech/services (OMCL) | 8.61% | Smallest-cap, least liquid holding |
| Healthcare — medtech/equipment (GEHC) | 5.48% | Over BR's 4% target and still extending |

**Combined healthcare (OMCL+GEHC): 14.09% of equity.** **Combined satellite/conviction sleeve (NVDA+OMCL+XLE+GEHC): 39.39% of equity** vs. **60.62% in the two core ETFs.** No sector outside the AI/tech look-through approaches a concentration level this desk would flag independently.

## 3. Geographic exposure and currency risk

- **VTI**: 100% US-domiciled, USD-denominated. No direct FX risk.
- **VXUS**: ~100% ex-US (developed + EM), underlying holdings in EUR/JPY/GBP/EM currencies — the book's only real currency-translation exposure at the fund level. A sustained USD strength cycle is a return headwind independent of local performance.
- **NVDA**: USD revenue, but with Taiwan/China supply-chain and end-market exposure — geopolitical/export-control risk that rhymes with currency risk without being FX per se.
- **OMCL**: essentially pure US domestic revenue — no meaningful geographic/currency risk.
- **XLE**: US-domiciled integrated/E&P majors (XOM/CVX-weighted) with global operations; oil itself is a globally USD-priced commodity. Today's shipping-volume data (still well below pre-war levels but recovering) argues for a gradually normalizing, not a resolved, supply picture — the basis for XLE's premium above a "normal" price regime is softening but not gone.
- **GEHC**: meaningful international revenue (global medtech sales) — some currency-translation exposure, smaller in dollar terms than VXUS's fund-level exposure given GEHC's 5.48% weight.

**Net: still a USD-heavy book.** VXUS is the only deliberate non-US/non-USD diversifier, sitting modestly over its 25% pool target (+0.74pp) — adequate as designed, no concern this run.

## 4. Interest rate sensitivity (per position)

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows; MS's DCF gap (-15.87% as of this run's price-roll) rests entirely on a Rf input now 11+ days stale |
| GEHC | **High** | Same DCF/WACC mechanism; MS's gap just crossed its own noise band for the first time (-3.01%) — a trend worth watching now, not just a round-trip |
| OMCL | **Moderate-high** | DCF-dependent valuation (MS's widest-on-book +36.39% gap, narrowing slightly on price alone, is itself WACC-sensitive), partially offset by contracted/recurring revenue |
| VTI | **Moderate** | Broad market including heavy mega-cap-growth/tech weighting, diversified by cyclicals/value too |
| VXUS | **Moderate-low** | Less mega-cap-growth-heavy than the US market; EM components carry independent rate/FX sensitivity |
| XLE | **Low-moderate, indirect only** | Primarily commodity-price-driven; MS's DCF gap (-11.06%, a new worst-ever reading, sixth straight widening) is blocked on a stale $76/bbl Brent assumption, not a fresh rate read |

**Standing flag, now in its second full week unresolved:** no desk has found a confirmable same-day 10yr Treasury print since roughly 10/1-10/2. This desk's own fresh search today again reproduced the pattern (best result dated June 2026). Every DCF-derived verdict in this book — now including the newly-built AMD read — is running on an assumption materially older than this desk is comfortable treating as current.

## 5. Recession stress test (NBER-style, moderate-recession assumptions, pool-weighted)

| Position | Assumed recession drawdown | Pool-weighted contribution |
|---|---|---|
| NVDA (high-beta, capex-cyclical) | -45% to -55% | -5.0% to -6.1% |
| VTI (broad US equity, GFC/2020-style) | -30% to -38% | -8.3% to -10.5% |
| VXUS (intl equity + FX drag) | -32% to -40% | -8.2% to -10.3% |
| OMCL (small-cap liquidity discount despite defensive end-market) | -35% to -45% | -2.6% to -3.4% |
| XLE (demand-driven recession scenario) | -30% to -45% | -3.4% to -5.1% |
| GEHC (defensive healthcare end-market, but capex-cycle exposed) | -25% to -35% | -1.2% to -1.7% |

**Estimated pool-level drawdown: roughly -28.7% to -37.1%** in a standard demand-driven recession — consistent with BR's own standing -26% to -38% range and essentially unchanged from Friday. **Same caveat this desk repeats every run it's relevant:** this assumes a *demand-driven* recession where oil demand falls with everything else and XLE's -30%/-45% applies. If the recession is instead *supply/oil-shock-driven* — the scenario XLE was actually bought to hedge — XLE's behavior flips, potentially flat-to-positive. Today's shipping-volume data (partial recovery, still well below normal, still contested) doesn't resolve which regime is more likely; it's logged as directional context only, not incorporated into the numbers above.

## 6. Liquidity risk (per holding)

| Holding | Liquidity rating | Note |
|---|---|---|
| NVDA | Low risk | Mega-cap, among the most liquid equities traded |
| VTI | Low risk | One of the largest US ETFs by AUM/volume |
| VXUS | Low risk | Large, liquid diversified international ETF |
| XLE | Low risk | Large, liquid sector ETF |
| GEHC | Low-moderate risk | Large-cap, adequate average daily volume |
| **OMCL** | **Moderate risk — the book's least liquid holding** | Small-cap (~$1.5-2B market cap); meaningfully lower ADV than every other position. Irrelevant at today's $3.84 position size, but worth flagging ahead of any future DCA-gate tranche (now ~$1.75 away): use a limit order and check the spread |

**No liquidity risk currently constrains this account's ability to exit any position at its current size.** Standing, low-urgency note.

## 7. Single-stock risk and position sizing

- **NVDA (12.53% equity / 11.03% pool):** +1.03pp over BR's 10% pool target, inside the 5pp drift band, well below the 18-20% single-name trigger — the gap actually eased today on the pullback. Today's -1.68% move was the book's worst, with no sourced catalyst found; not a trigger, but worth watching given it's the single largest valuation-gap holding by dollar size.
- **OMCL (8.61% / 7.57%):** below its 10% pool target by design (DCA-gated, -2.43pp drift) — the mechanism working as intended, gate ~$1.75 away.
- **XLE (12.77% / 11.24%):** modestly underweight its 12% pool target (-0.76pp), in-band.
- **GEHC (5.48% / 4.82%):** +0.82pp over its 4% pool target, still inside the 5pp band mechanically — but this desk flags plainly that "inside the band" is doing a lot of work here. The position keeps drifting further from both its cost basis and MS's fair value on no identified news, and with the upside-trigger question already closed by BR, there is currently no mechanism in this book that would act on that drift in either direction short of the 5pp band itself. That is a gap worth the team's attention, not just a note.
- **Combined NVDA+OMCL (21.14% of equity):** 3.86pp from the 25% backstop, slightly wider than Friday. No sizing action triggered.
- **No position-sizing changes recommended this run** — but see the GEHC flag above and the single-biggest-risk framing at top.

## 8. Tail risk scenarios (updated probability estimates)

| Scenario | Probability estimate | Pool-level impact |
|---|---|---|
| AI-bubble repricing (NVDA gap -15.87%; MS's new AMD hard-pass, -62.2%/-75.7%, is the fifth AI-adjacent name this book's cross-vetting bar has now rejected) | ~20-25%, unchanged — fresh WebSearch today found nothing dated this month beyond already-known June 2026 sell-off/Shiller-CAPE commentary | -6% to -11% pool-level |
| 10yr yield confirmation gap forces a fresh WACC rebuild in either direction | ~20-25% — now 11+ calendar days unconfirmable, this run's search again returned only stale (June 2026) figures | -3% to -8%, concentrated in NVDA/OMCL/XLE/GEHC/AMD(unheld) |
| Hormuz/Red Sea escalation to a sustained, confirmed closure | **~12-18%, held** — today's AFP/Kpler shipping-volume data is a second source pointing toward gradual normalization, but flows remain under half of pre-war levels and Iran's own position (IRGC: transit needs Tehran approval) is unchanged; not enough to move the number further, but the direction of the evidence continues to lean the same way it did Friday | XLE theoretically +15-25% as intended hedge — confidence in this playing out cleanly continues to soften |
| GEHC earnings (10/28, 16 days out, company-confirmed) and OMCL earnings (narrowed to 10/29-10/30, still unresolved) both approach the 2-week trigger window | ~100% this goes live on schedule (JPM's next trigger ~10/14) | Governed by existing contingency plans — no fresh action needed yet |
| Government shutdown escalation | ~10%, unchanged | -3% to -6% if it re-escalates |
| Broad recession confirmation (NBER-style) | ~10-15% over 2-4 weeks — credit spreads remain historically tight, yield curve not inverted | -28.7% to -37.1% pool-level (see §5) |
| GEHC's unexplained drift above fair value/the closed band continues without a sourced catalyst or a mechanism to act on it | ~40-50% it simply continues next run (no catalyst found in 4+ consecutive checks) | Not a loss scenario today (unrealized P&L is modestly negative), but a standing governance gap this desk is naming directly rather than re-flagging passively |

## 9. Hedging strategies for the top 3 risks (equities-only — no options)

1. **Rate/macro data-blindness risk (still the sharpest-named structural risk, now 11+ days running):** no fixed-income sleeve exists in this all-equity mandate, so there is no true hedge against a rate shock this book can't even currently detect. The only mitigant remains deployable cash (12.02% of pool) staying uncommitted — already in place. Standing recommendation unchanged: treat every DCF verdict older than ~10/1 as explicitly provisional in any sizing decision until a same-day rate print is confirmable again.
2. **NVDA/AI-concentration risk:** unchanged — direct all fresh deployable cash away from NVDA (BR's standing, permanent policy) and toward under-target names once their own gates clear. OMCL's DCA gate (~$1.75 away) remains the closest live mechanical lever. The new AMD read (and the now-five-deep pile of rejected AI-adjacent names) is additional, convergent reason not to revisit rule 20.
3. **Geopolitical/oil-supply-shock risk, plus the newer GEHC-drift governance gap:** XLE remains the designated hedge on paper; today's AFP/Kpler data is worth a dedicated follow-up next run (track actual shipping volumes, not just headline claims, as the more credible confirmation source going forward) rather than relying on single-source aggregator claims. Separately — and this is a genuine, if equities-only, "hedge" in the sizing sense — this desk recommends the team explicitly revisit whether GEHC's continued drift above both cost and fair value, now with no catalyst found across four-plus checks, warrants a fresh look at BR's 10/5 decision to close the upside-trigger question, rather than letting the drift run indefinitely with no mechanism attached to it.

## 10. Rebalancing suggestions (allocation %, pool basis)

| Position | Current (pool) | BR target | Drift |
|---|---|---|---|
| VTI | 27.59% | 28% | -0.41pp |
| VXUS | 25.74% | 25% | +0.74pp |
| NVDA | 11.03% | 10% | +1.03pp — governed by the 5pp band, no action needed |
| XLE | 11.24% | 12% | -0.76pp |
| GEHC | 4.82% | 4% | +0.82pp — see §7/§8 flag on unmechanized drift |
| OMCL | 7.57% | 10% | -2.43pp (DCA-gated by design, narrowing as the gate approaches) |
| Cash | 12.02% | 11% | +1.02pp |

**No position breaches the 5pp single-position drift trigger — no rebalance is mechanically required.** This desk's recommendation (§9.3) is a request to revisit a closed policy question, not a proposed trade.

---

## Heat Map Summary

| Risk Factor | Level | Trend since 10/9 14:43 ET |
|---|---|---|
| Rate/macro data blindness (10yr unconfirmable, now 11+ calendar days) | 🔴 High | → unchanged, still unresolved, duration worsening |
| NVDA valuation gap + AI-bubble commentary (-15.87%; reinforced by MS's new AMD hard-pass, the fifth rejected AI-adjacent name) | 🔴 High | → unchanged in degree, reinforced in breadth by today's AMD build |
| XLE DCF gap (-11.06%, new worst-ever, sixth straight widening, still blocked on stale $76/bbl Brent) | 🔴 High | ↑ worsened — new worst reading |
| XLE hedge-reliability claim (Hormuz thesis contested; today adds a second, more credible but still-mid-September-vintage source partially corroborating normalization) | 🟠 Elevated | → essentially unchanged, incremental new evidence, still unresolved |
| GEHC valuation drift (gap crossed the noise band for the first time, -3.01%; price now clearly above, not marginally above, the closed $62-65 band) | 🟠 Elevated (nudged from 🟡) | ↑ worsened — first noise-band crossing, no mechanism attached |
| Upcoming binary events (GEHC earnings 10/28 confirmed, 16 days out; OMCL earnings narrowed to 10/29-10/30) | 🟡 Moderate | → unchanged |
| Look-through tech/AI concentration (~27-30% of equity) | 🟡 Moderate | → unchanged |
| OMCL drawdown (-23.14%) vs widest DCF discount on book (+36.39%); DCA gate ~$1.75 away | 🟡 Moderate | → essentially flat |
| Government shutdown status | 🟢 Low | → stable |
| Pool profit level (+1.51%) | 🟢 Positive | ↓ modest pullback from this morning's +1.67% all-time high, not a reversal |
| Headline concentration triggers (NVDA%, NVDA+OMCL% combined) | 🟢 Low | → clean, 3.86pp buffer to the 25% trigger, slightly wider than Friday |
| Liquidity | 🟢 Low | → unchanged |

**Note on data quality (rule 4 discipline):** fresh WebSearch this run on all three standing fronts (10yr Treasury, AI-bubble/market, Hormuz/oil) again returned nothing reliably dated 2026-10-12 — the chronic dateline-staleness pattern every desk has now flagged for 5+ consecutive weeks continues. The Hormuz query was the one partial exception: it surfaced a more substantive, multi-source (AFP/Kpler/Lloyd's List) shipping-volume analysis not seen in this desk's prior searches, which is a genuinely better data point than the single-source claim flagged Friday — but it is mid-September vintage and explicitly contested by Iran's own stated position, so it moves this desk's confidence only incrementally, not to a resolution.

---

Sources:
- Robinhood `get_portfolio` / `get_equity_positions` / `get_equity_quotes` (live, 2026-10-12 ~10:42 ET)
- Internal: trading-experiment/state.md (Balance history + Run notes through 10/12 ~09:39 ET), analysts/ms-dcf-valuation.md (10/12 ~10:13 ET, AMD first-ever build + price-roll on six holdings, rate-check note), analysts/br-portfolio-builder.md (10/9 ~16:13 ET, targets still governing), analysts/jpm-earnings-analyzer.md (10/12 ~09:40 ET, GEHC/SNDK primary-source-confirmed, OMCL narrowed to a two-way split), analysts/gs-stock-screener.md (10/12 ~10:15 ET, AMD escalated past rule-14 threshold), this desk's own 10/9 ~14:43 ET report (prior version, git history)
- Fresh WebSearch this run: 10-year Treasury yield (today) — no usable result, best match a June 2026 "Data Talk" item; AI-bubble/stock-market news (today) — no usable result, best match already-known June 2026 sell-off and Shiller-CAPE commentary; Hormuz Strait/oil shipping (today) — no result dated today, but surfaced a more substantive AFP/Kpler/Lloyd's List shipping-volume analysis (mid-September vintage) partially corroborating a gradual-normalization narrative, contested by Iran's IRGC
